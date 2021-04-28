/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <KeynoteQuicklook/KNAnimationAttributes.h>

@interface KNTransitionAttributes : KNAnimationAttributes
+(id)defaultAttributesForEffect:(id)arg1 ;
+(id)supportedCustomAttributes;
+(char)customAttributeKeyIsValid:(id)arg1 ;
+(void)p_readSharedAttributesForArchive:(AnimationAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
+(id)p_readDeprecatedAttributesForArchive:(const TransitionAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
+(void)p_readTransitionAttributesForArchive:(const TransitionAttributesArchive*)arg1 intoDictionary:(id)arg2 ;
-(id)initFromTransitionAttributesArchive:(const TransitionAttributesArchive*)arg1 ;
-(void)encodeToArchive:(TransitionAttributesArchive*)arg1 ;
-(void)p_writeSharedAttributesToArchive:(TransitionAttributesArchive*)arg1 ;
-(void)p_writeTransitionAttributesToArchive:(TransitionAttributesArchive*)arg1 ;
@end

