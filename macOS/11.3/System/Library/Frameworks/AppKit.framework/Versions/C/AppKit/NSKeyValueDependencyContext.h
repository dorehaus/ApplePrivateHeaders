/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NSKeyValueDependencyContext : NSObject {

	/*^block*/id _invalidationHandler;
	unsigned long long _invalidationCount;

}

@property (assign) id<NSDynamicPropertyContainer> container; 
@property (copy) NSString * key; 
@property (copy,readonly) id invalidationHandler;                         //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
@property (readonly) unsigned long long invalidationCount;                //@synthesize invalidationCount=_invalidationCount - In the implementation block
+(id)currentContext;
+(id)contextStack;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(id<NSDynamicPropertyContainer>)container;
-(void)cancel;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)invalidationHandler;
-(id)initWithInvalidationHandler:(/*^block*/id)arg1 ;
-(void)becomeCurrentContext;
-(void)resignCurrentContext;
-(unsigned long long)invalidationCount;
-(void)setContainer:(id<NSDynamicPropertyContainer>)arg1 ;
@end
