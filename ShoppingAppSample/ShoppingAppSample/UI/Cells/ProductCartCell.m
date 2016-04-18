//
//  ProductCell.m
//  ShoppingCartExample
//
//  Created by Symonhay M on 5/31/15.
//  Copyright (c) 2015 Symonhay M. All rights reserved.
//

#import "ProductCartCell.h"

@implementation ProductCartCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

-(void)awakeFromNib
{
    [self.deleteButton setStyle:BButtonStyleBootstrapV3];
    [self.deleteButton setType:BButtonTypeDanger];

    self.selectionStyle = UITableViewCellSelectionStyleNone;
}

@end
