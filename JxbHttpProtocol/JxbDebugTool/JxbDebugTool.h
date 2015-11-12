//
//  JxbDebugTool.h
//  JxbHttpProtocol
//
//  Created by Peter Jin @ https://github.com/JxbSir on 15/11/12.
//  Copyright (c) 2015年 Mail:i@Jxb.name. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "JxbHttpProtocol.h"
#import <UIKit/UIKit.h>

#define kNotifyKeyReloadHttp    @"kNotifyKeyReloadHttp"


@interface JxbDebugTool : NSObject
@property (nonatomic,strong,readonly) NSMutableArray    *httpArray;
@property (nonatomic,copy) UIColor* mainColor;


+ (instancetype)shareInstance;
/**
 *  启用
 */
- (void)enableDebugMode;

/**
 *  记录http请求
 *
 *  @param model http
 */
- (void)addHttpRequset:(JxbHttpModel*)model;
@end
