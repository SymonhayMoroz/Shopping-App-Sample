//
//  CheckoutHeaderview.h
//  ShoppingCartExample
//
//  Created by Symonhay M on 5/31/15.
//  Copyright (c) 2015 Symonhay M. All rights reserved.
//

@class BButton;

@interface CheckoutHeaderview : UIView
@property (strong, nonatomic) IBOutlet UILabel *subtotal;
@property (strong, nonatomic) IBOutlet UILabel *total;
@property (strong, nonatomic) IBOutlet BButton *checkoutButton;

@end
