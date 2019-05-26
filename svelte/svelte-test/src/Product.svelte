<script>
	import Button from "./Button.svelte"
    export let productTitle;
    export let productPrice;
    export let productDescription;
</script>


<style>
    div {
        box-shadow: 0 2px 8px rgba(0,0,0,0.26);
        padding: 1rem;

    }

    h1 {
        font-size: 2rem;
    }

    h2 {
        font-size: 1rem;
    }

    button {
        font: inherit;
        padding: 015rem 0.5rem;
        border: 1px;
        cursor: pointer;
    }

    button:hover,
    button:active {
        box-shadow: 0, 0, 0, 0;
    }

</style>


<div>
    <h1>{productTitle}TITLE</h1>
    <h2>{productPrice}PRICE</h2>
    <p>{productDescription}DESCRIPTION</p>
    <Button>Add to Cart</Button>

</div>
