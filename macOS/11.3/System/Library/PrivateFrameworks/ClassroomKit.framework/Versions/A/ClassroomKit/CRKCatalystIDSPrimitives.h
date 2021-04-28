/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CATIDSPrimitives.h>

@protocol CRKIDSPrimitives, CRKIDSAddressTranslator;
@interface CRKCatalystIDSPrimitives : NSObject <CATIDSPrimitives> {

	id<CRKIDSPrimitives> _primitives;
	id<CRKIDSAddressTranslator> _addressTranslator;

}

@property (nonatomic,readonly) id<CRKIDSPrimitives> primitives;                            //@synthesize primitives=_primitives - In the implementation block
@property (nonatomic,readonly) id<CRKIDSAddressTranslator> addressTranslator;              //@synthesize addressTranslator=_addressTranslator - In the implementation block
+(id)crkOptionsFromOptions:(id)arg1 ;
-(void)sendMessage:(id)arg1 toAddress:(id)arg2 fromID:(id)arg3 options:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)addMessageHandler:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)addressForAppleID:(id)arg1 ;
-(id<CRKIDSAddressTranslator>)addressTranslator;
-(id<CRKIDSPrimitives>)primitives;
-(id)initWithPrimitives:(id)arg1 addressTranslator:(id)arg2 ;
@end

