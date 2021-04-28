/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/Versions/A/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCDisposable.h>

@class NSString;

@interface FCObserver : NSObject <FCDisposable> {

	unsigned long long _token;
	id _keepAliveObject;
	/*^block*/id _observerBlock;

}

@property (assign,nonatomic) unsigned long long token;               //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) id keepAliveObject;              //@synthesize keepAliveObject=_keepAliveObject - In the implementation block
@property (nonatomic,copy) id observerBlock;                         //@synthesize observerBlock=_observerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(unsigned long long)token;
-(void)setToken:(unsigned long long)arg1 ;
-(void)dispose;
-(id)initWithToken:(unsigned long long)arg1 ;
-(void)setObserverBlock:(id)arg1 ;
-(id)observerBlock;
-(void)setKeepAliveObject:(id)arg1 ;
-(void)disposeOn:(id)arg1 ;
-(id)keepAliveObject;
@end

