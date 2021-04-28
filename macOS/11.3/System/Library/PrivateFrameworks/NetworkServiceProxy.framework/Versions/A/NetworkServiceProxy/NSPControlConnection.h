/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/Versions/A/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NSPControlConnection : NSObject {

	unsigned long long _flowIdentifier;

}

@property (readonly) unsigned long long flowIdentifier;              //@synthesize flowIdentifier=_flowIdentifier - In the implementation block
-(unsigned long long)flowIdentifier;
-(id)initFromMetadata:(id)arg1 ;
-(id)initFromStream:(id)arg1 ;
-(id)initFromTask:(id)arg1 ;
-(id)initFromConnection:(id)arg1 ;
-(id)initFromNWConnection:(id)arg1 ;
-(void)fetchConnectionInfoWithCompletionHandler:(/*^block*/id)arg1 ;
@end

