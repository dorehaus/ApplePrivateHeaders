/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ScriptingBridge.framework/Versions/A/ScriptingBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@class SBObject, NSDictionary, NSError;

@interface SBProxy : NSProxy {

	SBObject* _createdObject;
	NSDictionary* _properties;
	id _data;
	NSError* _lastError;

}
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(char)respondsToSelector:(SEL)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)init;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(void)setLastError:(id)arg1 ;
-(id)lastError;
-(char)exists;
-(void)addToElementArray:(id)arg1 atLocation:(id)arg2 ;
-(id)initWithData:(id)arg1 andProperties:(id)arg2 ;
-(unsigned)codeInContext:(id)arg1 ;
@end
