/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/ContentKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/WFNaming.h>
#import <libobjc.A.dylib/WFSerializableContent.h>

@class NSURL, NSString, NSData;

@interface WFSafariWebPage : NSObject <NSCopying, WFNaming, WFSerializableContent> {

	NSURL* _URL;
	NSString* _pageTitle;
	NSString* _selectionText;
	NSData* _selectionHTML;
	NSData* _documentHTML;
	NSString* _javaScriptRunnerIdentifier;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                        //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageTitle;                               //@synthesize pageTitle=_pageTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectionText;                           //@synthesize selectionText=_selectionText - In the implementation block
@property (nonatomic,copy,readonly) NSData * selectionHTML;                             //@synthesize selectionHTML=_selectionHTML - In the implementation block
@property (nonatomic,copy,readonly) NSData * documentHTML;                              //@synthesize documentHTML=_documentHTML - In the implementation block
@property (nonatomic,copy,readonly) NSString * javaScriptRunnerIdentifier;              //@synthesize javaScriptRunnerIdentifier=_javaScriptRunnerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * wfName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithWFSerializedRepresentation:(id)arg1 ;
+(id)webPageFromPreprocessingResult:(id)arg1 javaScriptRunnerIdentifier:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)URL;
-(NSString *)selectionText;
-(NSString *)pageTitle;
-(id)wfSerializedRepresentation;
-(NSString *)wfName;
-(id)initWithURL:(id)arg1 pageTitle:(id)arg2 selectionText:(id)arg3 selectionHTML:(id)arg4 documentHTML:(id)arg5 javaScriptRunnerIdentifier:(id)arg6 ;
-(NSData *)selectionHTML;
-(NSData *)documentHTML;
-(NSString *)javaScriptRunnerIdentifier;
@end

