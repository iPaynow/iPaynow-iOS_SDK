//
//  IPNPreSignMessageUtil.h
//  TestPlugin
//
//  Created by Chuck on 2017/7/26.
//  Copyright © 2017年 iPayNow. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IPNPreSignMessageUtil : NSObject

/**
 *  商户appID
 */
@property (nonatomic,strong) NSString *appId;


/**
 *  商户订单号
 */
@property (nonatomic,strong) NSString *mhtOrderNo;


/**
 *  商户商品名称
 */
@property (nonatomic,strong) NSString *mhtOrderName;


/**
 *  商户交易类型
 */
@property (nonatomic,strong) NSString *mhtOrderType;


/**
 *  商户订单币种类型
 */
@property (nonatomic,strong) NSString *mhtCurrencyType;


/**
 *  商户订单交易金额
 */
@property (nonatomic,strong) NSString *mhtOrderAmt;


/**
 *  订单详情
 */
@property (nonatomic,strong) NSString *mhtOrderDetail;


/**
 *  订单开始时间
 */
@property (nonatomic,strong) NSString *mhtOrderStartTime;


/**
 *  支付通知URL
 */
@property (nonatomic,strong) NSString *notifyUrl;


/**
 *  交易字符编码
 */
@property (nonatomic,strong) NSString *mhtCharset;


/**
 商户在现在支付商户系统的ID
 */
@property (nonatomic,strong) NSString *consumerId;


/**
 商户在现在支付商户系统的名称
 */
@property (nonatomic,strong) NSString *consumerName;


/**
 *  订单超时时间
 */
@property (nonatomic,strong) NSString *mhtOrderTimeOut;


/**
 *  商户保留域（给商户使用的字段，商户可以对交易进行标记，现在支付将原样返回）
 */
@property (nonatomic,strong) NSString *mhtReserved;


/**
 *  商户所选渠道类型
 */
@property (nonatomic,strong) NSString *payChannelType;


/**
 商户在微信或者支付宝的appId
 */
@property (nonatomic,strong) NSString *mhtSubAppId;


/**
 指定不能使用信用卡支付(若填只能为"no_credit")
 */
@property (nonatomic,strong) NSString *mhtLimitPay;



@property (nonatomic,strong) NSString *mhtSignType;
@property (nonatomic,strong) NSString *funcode;
@property (nonatomic,strong) NSString *deviceType;
@property (nonatomic,strong) NSString *version;

/**
 *  进行签名串的生成
 *
 *  @return 签名串
 */
- (NSString *)generatePresignMessage;

@end
