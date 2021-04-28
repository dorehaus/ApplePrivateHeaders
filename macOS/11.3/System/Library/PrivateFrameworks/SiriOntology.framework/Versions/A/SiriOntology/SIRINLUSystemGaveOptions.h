/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:21 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/Versions/A/SiriOntology
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SIRINLUSystemDialogAct.h>

@class NSString, NSArray;

@interface SIRINLUSystemGaveOptions : NSObject <SIRINLUSystemDialogAct> {

	NSString* renderedText;
	NSArray* _choices;

}

@property (nonatomic,retain) NSArray * choices;                    //@synthesize choices=_choices - In the implementation block
@property (nonatomic,retain) NSString * renderedText; 
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)choices;
-(void)setChoices:(NSArray *)arg1 ;
-(id)initWithChoices:(id)arg1 ;
-(NSString *)renderedText;
-(void)setRenderedText:(NSString *)arg1 ;
@end

