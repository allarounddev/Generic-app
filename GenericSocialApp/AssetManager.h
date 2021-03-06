//
//  AssetManager.h
//  PeggSite
//
//  Created by Victor Belenko  on 6/13/14.
//  Copyright (c) 2014 Victor Belenko . All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AssetManager : NSObject

+ (AssetManager *)sharedInstance;
+ (ALAssetsLibrary *)defaultAssetsLibrary;

- (void)loadImageAssetWithCompletionBlock:(void (^)(UIImage *image, NSError *error))completionBlock;
- (void)loadThumbnailAssetWithCompletionBlock:(void (^)(UIImage *image, NSError *error))completionBlock;
- (void)loadAssetsWithCompletionBlock:(void (^)(NSArray *assets, NSError *error))completionBlock;

@end
