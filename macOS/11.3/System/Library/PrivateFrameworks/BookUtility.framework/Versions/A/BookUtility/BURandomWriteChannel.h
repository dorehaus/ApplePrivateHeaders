/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:32 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/Versions/A/BookUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BURandomWriteChannel <BUIOChannel>
@required
-(void)flushWithCompletion:(/*^block*/id)arg1;
-(void)writeData:(id)arg1 offset:(long long)arg2 handler:(/*^block*/id)arg3;
-(void)truncateToLength:(long long)arg1 completion:(/*^block*/id)arg2;

@end

