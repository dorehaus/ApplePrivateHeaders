/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/Versions/A/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFParameter.h>

@class NSArray;

@interface WFContactFieldParameter : WFParameter {

	char _allowsTextEntry;
	char _hidesLabel;
	long long _textAlignment;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	NSArray* _supportedContactProperties;

}

@property (nonatomic,readonly) char allowsTextEntry;                              //@synthesize allowsTextEntry=_allowsTextEntry - In the implementation block
@property (nonatomic,readonly) long long keyboardType; 
@property (nonatomic,readonly) long long textAlignment;                           //@synthesize textAlignment=_textAlignment - In the implementation block
@property (nonatomic,readonly) long long autocapitalizationType;                  //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (nonatomic,readonly) long long autocorrectionType;                      //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,readonly) NSArray * supportedContactProperties;              //@synthesize supportedContactProperties=_supportedContactProperties - In the implementation block
@property (nonatomic,readonly) char hidesLabel;                                   //@synthesize hidesLabel=_hidesLabel - In the implementation block
-(long long)keyboardType;
-(long long)autocorrectionType;
-(long long)textAlignment;
-(Class)stateClass;
-(long long)autocapitalizationType;
-(id)initWithDefinition:(id)arg1 ;
-(Class)singleStateClass;
-(char)displaysMultipleValueEditor;
-(Class)multipleStateClass;
-(char)shouldAlignLabels;
-(char)allowsTextEntry;
-(NSArray *)supportedContactProperties;
-(char)hidesLabel;
@end

