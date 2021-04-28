/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:30 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/Versions/A/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXRuntime/AXRuntime-Structs.h>
#import <AXRuntime/AXUIElement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface AXUIMockElement : AXUIElement <NSCopying> {

	NSMutableDictionary* _writableAttributes;
	NSMutableDictionary* _performActionLog;
	char _usesCarriageReturnAsLinesSeparator;
	NSMutableDictionary* _attributes;
	/*^block*/id _handleActionBlock;
	/*^block*/id _cacheUpdatedCallback;

}

@property (nonatomic,retain) NSMutableDictionary * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (assign,nonatomic) char usesCarriageReturnAsLinesSeparator;              //@synthesize usesCarriageReturnAsLinesSeparator=_usesCarriageReturnAsLinesSeparator - In the implementation block
@property (nonatomic,copy) id handleActionBlock;                                   //@synthesize handleActionBlock=_handleActionBlock - In the implementation block
@property (nonatomic,copy) id cacheUpdatedCallback;                                //@synthesize cacheUpdatedCallback=_cacheUpdatedCallback - In the implementation block
+(void)applyElementAttributeCacheScheme:(unsigned long long)arg1 ;
+(id)uiElementAtCoordinate:(CGPoint)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(char)isValid;
-(int)pid;
-(NSMutableDictionary *)attributes;
-(void)setAttributes:(NSMutableDictionary *)arg1 ;
-(id)_valueForAttribute:(long long)arg1 ;
-(void)updateCache:(long long)arg1 ;
-(void)disableCache;
-(void)setValue:(id)arg1 forAXAttribute:(long long)arg2 ;
-(void)startLoggingActions;
-(id)endLoggingActions;
-(id)stringWithAXAttribute:(long long)arg1 ;
-(CGRect)rectWithAXAttribute:(long long)arg1 ;
-(id)numberWithAXAttribute:(long long)arg1 ;
-(CGPoint)pointWithAXAttribute:(long long)arg1 ;
-(char)usesCarriageReturnAsLinesSeparator;
-(NSRange)rangeWithAXAttribute:(long long)arg1 ;
-(id)objectWithAXAttribute:(long long)arg1 parameter:(void*)arg2 ;
-(id)objectWithAXAttribute:(long long)arg1 ;
-(unsigned long long)_lineNumberForPoint:(CGPoint)arg1 ;
-(id)handleActionBlock;
-(id)cacheUpdatedCallback;
-(char)canSetAXAttribute:(long long)arg1 ;
-(char)isMockElement;
-(AXUIElementRef)axElement;
-(id)visibleElements;
-(id)performBlockWhileLoggingPerformedActions:(/*^block*/id)arg1 ;
-(void)enableCache:(char)arg1 ;
-(void)setWritable:(char)arg1 forAXAttribute:(long long)arg2 ;
-(id)uiElementWithAXAttribute:(long long)arg1 ;
-(char)canPerformAXAction:(int)arg1 ;
-(void)setValue:(id)arg1 forAXParameterizedAttribute:(long long)arg2 ;
-(id)arrayWithAXAttribute:(long long)arg1 ;
-(char)boolWithAXAttribute:(long long)arg1 ;
-(float)floatWithAXAttribute:(long long)arg1 ;
-(long long)longWithAXAttribute:(long long)arg1 ;
-(CGSize)sizeWithAXAttribute:(long long)arg1 ;
-(CGPathRef)pathWithAXAttribute:(long long)arg1 ;
-(id)urlWithAXAttribute:(long long)arg1 ;
-(id)uiElementArrayForAXAttribute:(long long)arg1 ;
-(unsigned long long)arrayCountWithAXAttribute:(long long)arg1 ;
-(void)fillStaticCache;
-(id)cachedAttributes;
-(id)uiElementsWithAttribute:(long long)arg1 ;
-(id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2 ;
-(char)performAXAction:(int)arg1 ;
-(char)performAXAction:(int)arg1 withValue:(id)arg2 ;
-(char)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned)arg3 ;
-(id)previousElementsWithCount:(unsigned long long)arg1 ;
-(id)nextElementsWithCount:(unsigned long long)arg1 ;
-(id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2 fetchAttributes:(char)arg3 ;
-(char)isValidForApplication:(id)arg1 ;
-(void)updateCacheWithAttributes:(id)arg1 ;
-(void)setAXAttribute:(long long)arg1 withBOOL:(char)arg2 ;
-(void)setAXAttribute:(long long)arg1 withString:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withLong:(long long)arg2 ;
-(void)setAXAttribute:(long long)arg1 withFloat:(float)arg2 ;
-(void)setAXAttribute:(long long)arg1 withNumber:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withPoint:(CGPoint)arg2 ;
-(void)setAXAttribute:(long long)arg1 withSize:(CGSize)arg2 ;
-(void)setAXAttribute:(long long)arg1 withRange:(NSRange)arg2 ;
-(void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withArray:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withObject:(id)arg2 ;
-(void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(char)arg3 ;
-(CGPoint)pointForLineNumber:(unsigned long long)arg1 ;
-(void)setUsesCarriageReturnAsLinesSeparator:(char)arg1 ;
-(void)setHandleActionBlock:(id)arg1 ;
-(void)setCacheUpdatedCallback:(id)arg1 ;
@end

