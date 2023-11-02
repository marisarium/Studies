// Sample product data
const products = [
    { name: 'Product 1', price: 19.99 },
    { name: 'Product 2', price: 24.99 },
    { name: 'Product 3', price: 14.99 },
];

// Display products in the product-list section
function displayProducts() {
    const productContainer = document.getElementById('product-list');
    let html = '';

    products.forEach(product => {
        html += `<div class="product">
                    <h3>${product.name}</h3>
                    <p>${product.price}</p>
                    <button>Add to Cart</button>
                </div>`;
    });

    productContainer.innerHTML = html;
}

// Load products on page load
window.onload = function() {
    displayProducts();
};
