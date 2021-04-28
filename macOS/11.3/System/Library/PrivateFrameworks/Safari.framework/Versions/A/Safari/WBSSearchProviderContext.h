/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary;


@protocol WBSSearchProviderContext <NSObject>
@property (nonatomic,readonly) long long deviceType; 
@property (nonatomic,copy,readonly) NSString * countryCode; 
@property (nonatomic,copy,readonly) NSString * systemLanguage; 
@property (nonatomic,copy,readonly) NSDictionary * templateParameterValues; 
@property (nonatomic,copy,readonly) NSDictionary * carrierTemplateParameterValues; 
@property (nonatomic,readonly) char isChinaDevice; 
@required
-(NSString *)countryCode;
-(long long)deviceType;
-(char)isSearchProviderEnabled:(unsigned long long)arg1;
-(NSString *)systemLanguage;
-(NSDictionary *)templateParameterValues;
-(NSDictionary *)carrierTemplateParameterValues;
-(char)isChinaDevice;

@end

