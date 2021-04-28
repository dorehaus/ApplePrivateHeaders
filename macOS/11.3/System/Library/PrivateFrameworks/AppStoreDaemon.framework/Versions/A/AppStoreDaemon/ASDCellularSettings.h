/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ASDCellularSettings : NSObject {

	NSString* _defaultsKey;

}

@property (assign,nonatomic) char allowAutomaticDownloads; 
@property (assign,nonatomic) long long cellularDataPrompt; 
+(id)settingsForIdentity:(id)arg1 ;
-(id)initWithDefaultsKey:(id)arg1 ;
-(char)allowAutomaticDownloads;
-(void)setAllowAutomaticDownloads:(char)arg1 ;
-(long long)cellularDataPrompt;
-(void)setCellularDataPrompt:(long long)arg1 ;
-(id)_cellularSettings;
@end

