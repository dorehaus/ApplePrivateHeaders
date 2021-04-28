/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriFoundation.framework/Versions/A/SiriFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface SRFProcessInfo : NSObject {

	NSXPCConnection* _connectionToSiri;

}

@property (nonatomic,retain) NSXPCConnection * connectionToSiri;              //@synthesize connectionToSiri=_connectionToSiri - In the implementation block
-(NSXPCConnection *)connectionToSiri;
-(void)beginMainStagePresentationActivityWithReason:(id)arg1 ;
-(void)endMainStagePresentationActivityWithReason:(id)arg1 ;
-(void)beginEducationActivityWithReason:(id)arg1 ;
-(void)endEducationActivtyWithReason:(id)arg1 ;
-(void)setConnectionToSiri:(NSXPCConnection *)arg1 ;
@end

