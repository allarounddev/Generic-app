//
//  LoaderCell.m
//  PeggSite
//
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import "LoaderCell.h"

@implementation LoaderCell

- (void)awakeFromNib
{
    self.tag = LOADING_CELL_TAG;
}

-(void)startAnimating
{
    [self.activityIndicator startAnimating];
}


@end
