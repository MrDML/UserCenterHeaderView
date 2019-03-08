//
//  HeaderCustomeView.h
//  headerView
//
//  Created by 戴明亮 on 2018/3/2.
//  Copyright © 2018年 戴明亮. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HeaderCustomeView : UIView
@property (nonatomic, weak) UIScrollView *scrollView;
// image action
@property (nonatomic, copy) void(^imgActionBlock)();

- (id)initWithFrame:(CGRect)frame backGroudImage:(NSString *)backImageName headerImageURL:(NSString *)headerImageURL title:(NSString *)title subTitle:(NSString *)subTitle;

-(void)updateSubViewsWithScrollOffset:(CGPoint)newOffset;
@end
