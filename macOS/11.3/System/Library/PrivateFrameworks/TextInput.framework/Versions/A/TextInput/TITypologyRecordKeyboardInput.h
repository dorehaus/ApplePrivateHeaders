/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/Versions/A/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TITypologyRecord.h>

@class TIKeyboardInput, TIKeyboardState, TIKeyboardOutput, TIKeyboardConfiguration;

@interface TITypologyRecordKeyboardInput : TITypologyRecord {

	TIKeyboardInput* _input;
	TIKeyboardState* _keyboardState;
	TIKeyboardOutput* _output;
	TIKeyboardConfiguration* _keyboardConfig;

}

@property (nonatomic,retain) TIKeyboardInput * input;                               //@synthesize input=_input - In the implementation block
@property (nonatomic,retain) TIKeyboardState * keyboardState;                       //@synthesize keyboardState=_keyboardState - In the implementation block
@property (nonatomic,retain) TIKeyboardOutput * output;                             //@synthesize output=_output - In the implementation block
@property (nonatomic,retain) TIKeyboardConfiguration * keyboardConfig;              //@synthesize keyboardConfig=_keyboardConfig - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(TIKeyboardInput *)input;
-(id)shortDescription;
-(TIKeyboardOutput *)output;
-(void)setOutput:(TIKeyboardOutput *)arg1 ;
-(void)setInput:(TIKeyboardInput *)arg1 ;
-(id)textSummary;
-(id)changedText;
-(id)currentKeyboardState;
-(void)removeContextFromKeyboardState;
-(void)replaceDocumentState:(id)arg1 ;
-(TIKeyboardState *)keyboardState;
-(void)setKeyboardState:(TIKeyboardState *)arg1 ;
-(TIKeyboardConfiguration *)keyboardConfig;
-(void)setKeyboardConfig:(TIKeyboardConfiguration *)arg1 ;
-(void)applyToStatistic:(id)arg1 ;
@end

