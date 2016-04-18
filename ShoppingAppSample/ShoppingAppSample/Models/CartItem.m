//
// Created by Symonhay M on 5/24/15.
// Copyright (c) 2015 Symonhay M. All rights reserved.
//

#import "CartItem.h"
#import "Product.h"


@implementation CartItem

- (id)initWithProduct:(Product *)product
{
    return [self initWithProduct:product andQuantity:1];
}

- (id)initWithProduct:(Product *)product andQuantity:(int)quantity
{
    self = [super init];

    if(self)
    {
        self.product = product;
        self.quantity = quantity;
    }

    return self;
}


@end