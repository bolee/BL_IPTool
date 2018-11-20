//
//  IPToolManager.h
//  BiaoJiePay
//
//  Created by 夏远全 on 16/11/22.
//  Copyright © 2016年 xiayuanquan. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXTERN NSString * const NetTypeCellular;
FOUNDATION_EXTERN NSString * const NetTypeWifi;
FOUNDATION_EXTERN NSString * const NetTypeVPN0;
FOUNDATION_EXTERN NSString * const NetTypeVPN1;

@interface IPToolManager : NSObject
/**
 *  单例
 */
+(instancetype)sharedManager;


/**
 *  方法一
 *  获取具体的ip地址
 */
-(NSString *)currentIpAddress;

/**
 根据网卡类型获取
 */
- (NSString *)currentIpAddressByType:(NSString *)type;

/**
 *  方法二
 *  获取ip地址的详细信息
 */
-(void)currentIPAdressDetailInfo;

@end
