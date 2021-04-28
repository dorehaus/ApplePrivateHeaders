/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/Versions/A/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSObject;

@interface PLXPCTransaction : NSObject {

	const char* _identifier;
	NSObject*<OS_os_transaction> _transaction;

}
+(void)initialize;
+(id)callStackSymbols;
+(void)_stopTrackingTransaction:(id)arg1 ;
+(void)_startTrackingTransaction:(id)arg1 ;
+(void)discardCallStackSymbols:(id)arg1 ;
+(id)transaction:(const char*)arg1 ;
+(id)openXPCTransactionStatus;
-(void)dealloc;
-(id)description;
-(id)initWithIdentifier:(const char*)arg1 ;
-(id)_statusDescription;
-(void)stillAlive;
@end

