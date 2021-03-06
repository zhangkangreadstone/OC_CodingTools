//
//  BaseViewController.h
//  ZK_OC_Tools
//
//  Created by LSH on 2019/1/24.
//  Copyright © 2019 Practice. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BaseViewController : UIViewController

- (void)setNavBarLeftItemWithImage:(NSString *)imageName target:(nullable id)target action:(nullable SEL)action;

@end

NS_ASSUME_NONNULL_END
