/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/Versions/A/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface SHLibrarySyncResult : NSObject {

	NSError* _error;
	/*^block*/id _completionHandler;

}

@property (retain) NSError * error;                 //@synthesize error=_error - In the implementation block
@property (copy) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setCompletionHandler:(id)arg1 ;
-(id)completionHandler;
@end

