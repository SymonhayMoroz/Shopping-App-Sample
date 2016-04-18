//
//  ProductCell.h
//  ShoppingCartExample
//
//  Created by Symonhay M on 5/31/15.
//  Copyright (c) 2015 Symonhay M. All rights reserved.
//

#import "BButton.h"

@interface ProductCell : UITableViewCell
@property (strong, nonatomic) IBOutlet UIImageView *productImage;
@property (strong, nonatomic) IBOutlet UILabel *productTitle;
@property (strong, nonatomic) IBOutlet UILabel *productPrice;
@property (strong, nonatomic) IBOutlet BButton *addToCartButton;

@end
