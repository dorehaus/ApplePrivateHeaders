/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/Versions/A/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@interface PCCKey : NSObject {

	pcc_invocation_key* _secret;

}

@property (assign) pcc_invocation_key* secret;              //@synthesize secret=_secret - In the implementation block
-(void)dealloc;
-(id)init;
-(pcc_invocation_key*)secret;
-(void)clear;
-(id)encrypt:(id)arg1 ;
-(id)decrypt:(id)arg1 ;
-(void)setSecret:(pcc_invocation_key*)arg1 ;
@end

