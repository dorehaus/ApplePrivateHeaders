/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/OSAKit.framework/Versions/A/OSAKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSAKit/OSADefinition.h>

@class NSMutableArray, OSADocumentationDefinition;

@interface OSAVerbDefinition : OSADefinition {

	NSMutableArray* _parameterDefinitions;
	OSADocumentationDefinition* _documentation;

}
-(void)dealloc;
-(id)init;
-(id)documentation;
-(void)setDocumentation:(id)arg1 ;
-(void)addParameterDefinition:(id)arg1 ;
-(id)parameterDefinitions;
-(void)setParameterDefinitions:(id)arg1 ;
@end

