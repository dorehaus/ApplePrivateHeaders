/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/Versions/A/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, Protocol;

@interface NFMultiDelegate : NSObject {

	NSHashTable* _children;
	Protocol* _delegateProtocol;

}

@property (nonatomic,readonly) NSHashTable * children;                   //@synthesize children=_children - In the implementation block
@property (nonatomic,readonly) Protocol * delegateProtocol;              //@synthesize delegateProtocol=_delegateProtocol - In the implementation block
@property (nonatomic,readonly) id delegate; 
-(char)conformsToProtocol:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)delegate;
-(NSHashTable *)children;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 delegateProtocol:(id)arg2 ;
-(Protocol *)delegateProtocol;
-(void)replaceDelegate:(id)arg1 withDelegate:(id)arg2 ;
@end

