/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:58 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzComposer.framework/Versions/A/QuartzComposer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface QCSCN_Transaction : NSObject
+(void)lock;
+(void)unlock;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(id)valueForKey:(id)arg1 ;
+(void)commit;
+(/*^block*/id)completionBlock;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(void)begin;
+(void)flush;
+(char)disableActions;
+(void)setDisableActions:(char)arg1 ;
+(void)setAnimationDuration:(double)arg1 ;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(double)animationDuration;
+(unsigned)currentState;
+(id)animationTimingFunction;
+(char)isSelectorExcludedFromWebScript:(SEL)arg1 ;
+(char)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(id)propertyKeys;
+(void)postCommandWithContext:(void*)arg1 object:(id)arg2 commandID:(unsigned long long)arg3 arguments:(void*)arg4 keyPath:(id)arg5 canCollapse:(char)arg6 applyFunction:(/*function pointer*/void*)arg7 ;
+(Class)typeForProperty:(id)arg1 ;
+(int)_baseTypeForProperty:(id)arg1 ;
+(void)enableImmediateMode:(char)arg1 ;
+(id)jsInstance;
-(void)lock;
-(void)unlock;
-(void)commit;
-(void)begin;
-(void)flush;
-(char)disableActions;
-(void)setDisableActions:(char)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(void)setAnimationTimingFunction:(id)arg1 ;
-(double)animationDuration;
-(id)animationTimingFunction;
-(id)propertyKeys;
@end
