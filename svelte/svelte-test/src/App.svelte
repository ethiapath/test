<script>
	import Product from "./Product.svelte"
	import Button from "./Button.svelte"
	export let name = 'me';

	let title = '';
	let description = '';
	let products = [];

	let page = 0;

	function setTitle(event) {
		title = event.target.value;
	}

	function createProduct() {
		const newProduct ={ 
			title: title,
			price: price,
			description: description
		}

		// products.push(newProduct)
		products = products.concat(newProduct)

	}
</script>

<style>
	h1 {
		color: purple;
	}

	section {
		width: 30rem;
		margin: auto;
	}

	label,
	input,
	textarea {
		width: 100%;
	}
</style>

<p>{title}</p>
<section>
	<div>
		<label for="title">Title</label>
		<input type="text" id="title" value={title} on:input="{setTitle}">
		<label for="price" >Price</label>
		<input type="number" id="price" bind:value={price}>

		<label for="description">description</label>
	</div>
	<div>
		<textarea rows="3" id="description" bind:value={description}></textarea>
		<Button on:click={createProduct}>Create Product</Button>
	</div>


</section>

{#if products.length === 0}
	<p>No products werver added yet</p>
	{:else}
	{#each products as product}

	<Product productTitle={product.title} productPrice={product.price} productDescription={product.description}/>
	{/each}

{/if}