/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CardKit.framework/Versions/A/CardKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CRSCardServing.h>
#import <libobjc.A.dylib/CRSIdentifiedServing.h>

@protocol _CRKSendMessageCardFactoryDelegate;
@class NSString;

@interface _CRKSendMessageCardFactory : NSObject <CRSCardServing, CRSIdentifiedServing> {

	id<_CRKSendMessageCardFactoryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<_CRKSendMessageCardFactoryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * serviceIdentifier; 
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_CRKSendMessageCardFactoryDelegate>)delegate;
-(void)setDelegate:(id<_CRKSendMessageCardFactoryDelegate>)arg1 ;
-(NSString *)serviceIdentifier;
-(void)buildCardForContent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)canSatisfyCardRequest:(id)arg1 ;
-(unsigned long long)servicePriorityForRequest:(id)arg1 ;
-(void)requestCard:(id)arg1 reply:(/*^block*/id)arg2 ;
@end
