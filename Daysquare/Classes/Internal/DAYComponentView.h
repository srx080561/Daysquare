//
//  DAYComponentView.h
//  Daysquare
//
//  Created by 杨弘宇 on 16/6/7.
//  Copyright © 2016年 Cyandev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DAYComponentView : UIControl

@property (readonly) UILabel *textLabel;
@property (strong, nonatomic) id representedObject;

@end
