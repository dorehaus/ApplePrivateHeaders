/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/Versions/A/CoreSpeechFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface CSDispatchGroup : NSObject {

	NSObject*<OS_dispatch_group> _dispatchGroup;
	int _dispatchGroupCounter;

}
-(id)init;
-(long long)waitWithTimeout:(unsigned long long)arg1 ;
-(void)enter;
-(void)leave;
@end

