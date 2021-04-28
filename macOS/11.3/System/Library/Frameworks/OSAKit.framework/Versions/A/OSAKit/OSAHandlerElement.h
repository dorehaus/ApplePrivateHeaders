/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSAKit/OSAScriptElement.h>

@class NSString;

@interface OSAHandlerElement : OSAScriptElement {

	NSString* _parameters;

}
+(id)elementWithName:(id)arg1 ;
+(id)elementWithName:(id)arg1 parameters:(id)arg2 ;
-(void)dealloc;
-(id)initWithName:(id)arg1 ;
-(id)title;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
-(id)initWithName:(id)arg1 parameters:(id)arg2 ;
-(char)generateIntoText:(id)arg1 indent:(unsigned)arg2 ;
@end
