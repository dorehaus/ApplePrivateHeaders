/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:40 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/Versions/A/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentDeviceMetadata;

@interface PKPaymentDeviceMetadataFetchTask : NSObject {

	PKPaymentDeviceMetadata* _deviceMetadata;
	unsigned long long _remaningFields;
	unsigned long long _requestedFields;
	/*^block*/id _completion;

}

@property (nonatomic,retain) PKPaymentDeviceMetadata * deviceMetadata;              //@synthesize deviceMetadata=_deviceMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long remaningFields;                     //@synthesize remaningFields=_remaningFields - In the implementation block
@property (assign,nonatomic) unsigned long long requestedFields;                    //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(PKPaymentDeviceMetadata *)deviceMetadata;
-(void)setDeviceMetadata:(PKPaymentDeviceMetadata *)arg1 ;
-(unsigned long long)remaningFields;
-(void)setRemaningFields:(unsigned long long)arg1 ;
-(unsigned long long)requestedFields;
-(void)setRequestedFields:(unsigned long long)arg1 ;
@end
