/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Versions/A/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/ASDRequestResponse.h>

@class NSArray;

@interface ASDInstallManifestRequestResponse : ASDRequestResponse {

	NSArray* _results;

}

@property (nonatomic,readonly) NSArray * results;              //@synthesize results=_results - In the implementation block
@property (assign) char success; 
-(id)init;
-(NSArray *)results;
-(id)initWithResults:(id)arg1 ;
@end
