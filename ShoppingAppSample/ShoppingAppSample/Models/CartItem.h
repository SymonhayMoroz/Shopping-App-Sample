//
// Created by Symonhay M on 5/24/15.
// Copyright (c) 2015 Symonhay M. All rights reserved.
//

@class Product;


@interface CartItem : NSObject
@property (strong, nonatomic) Product *product;
@property (assign, nonatomic) int quantity;

- (id)initWithProduct:(Product *)product;
- (id)initWithProduct:(Product *)product andQuantity:(int)quantity;
@end