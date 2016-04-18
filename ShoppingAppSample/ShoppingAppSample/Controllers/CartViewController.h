//
//  CartViewController.h
//  ShoppingCartExample
//
//  Created by Symonhay M on 6/1/15.
//  Copyright (c) 2015 Symonhay M. All rights reserved.
//

#import "PayPalPaymentViewController.h"

@interface CartViewController : UITableViewController<PayPalPaymentDelegate>
- (instancetype)initWithCoder:(NSCoder *)aDecoder;
- (void)loadItems;
@end
