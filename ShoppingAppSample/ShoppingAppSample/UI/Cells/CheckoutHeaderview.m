//
//  CheckoutHeaderview.m
//  ShoppingCartExample
//
//  Created by Symonhay M on 5/31/15.
//  Copyright (c) 2015 Symonhay M. All rights reserved.
//

#import <BButton/BButton.h>
#import "CheckoutHeaderview.h"

@implementation CheckoutHeaderview

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        // Initialization code
    }
    return self;
}

-(void)awakeFromNib
{
    [self.checkoutButton setStyle:BButtonStyleBootstrapV3];
    [self.checkoutButton setType:BButtonTypeWarning];
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect
{
    // Drawing code
}
*/

@end
