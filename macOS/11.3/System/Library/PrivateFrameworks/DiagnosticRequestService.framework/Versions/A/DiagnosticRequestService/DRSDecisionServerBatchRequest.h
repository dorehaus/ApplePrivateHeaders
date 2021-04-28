/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/Versions/A/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class DRSProtoClientDeviceMetadata, NSMutableArray;


@protocol DRSDecisionServerBatchRequest <NSObject>
@property (nonatomic,readonly) char hasClientMetadata; 
@property (nonatomic,retain) DRSProtoClientDeviceMetadata * clientMetadata; 
@property (nonatomic,retain) NSMutableArray * requests; 
@required
-(NSMutableArray *)requests;
-(void)setRequests:(id)arg1;
-(DRSProtoClientDeviceMetadata *)clientMetadata;
-(void)setClientMetadata:(id)arg1;
-(char)hasClientMetadata;

@end
