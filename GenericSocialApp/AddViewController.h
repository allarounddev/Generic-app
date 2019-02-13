//
//  AddViewController.h
//  PeggSite
//
//  Created by Victor Belenko  on 6/13/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import "PSViewController.h"

@interface AddViewController : PSViewController

@property (nonatomic, assign) AddContentType contentType;
@property (nonatomic, strong) Article *article;

@end
