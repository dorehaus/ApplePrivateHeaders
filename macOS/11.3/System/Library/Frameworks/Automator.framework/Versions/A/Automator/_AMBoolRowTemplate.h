/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:43 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Automator.framework/Versions/A/Automator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Automator/Automator-Structs.h>
#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton, NSString;

@interface _AMBoolRowTemplate : NSPredicateEditorRowTemplate {

	NSPopUpButton* _leftExpressionPopup;
	NSPopUpButton* _valuePopup;
	NSString* _name;
	NSString* _keyPath;
	NSString* _valueName;
	char _value;
	char _hasCreatedViews;

}

@property (retain) NSPopUpButton * leftExpressionPopup;              //@synthesize leftExpressionPopup=_leftExpressionPopup - In the implementation block
@property (retain) NSPopUpButton * valuePopup;                       //@synthesize valuePopup=_valuePopup - In the implementation block
@property (assign) char hasCreatedViews;                             //@synthesize hasCreatedViews=_hasCreatedViews - In the implementation block
@property (copy) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (copy) NSString * keyPath;                                 //@synthesize keyPath=_keyPath - In the implementation block
@property (copy) NSString * valueName;                               //@synthesize valueName=_valueName - In the implementation block
@property (assign) char value;                                       //@synthesize value=_value - In the implementation block
+(id)templateWithName:(id)arg1 andKeyPath:(id)arg2 andValueName:(id)arg3 andValue:(char)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(char)value;
-(void)setPredicate:(id)arg1 ;
-(NSString *)keyPath;
-(void)setValue:(char)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)templateViews;
-(double)matchForPredicate:(id)arg1 ;
-(id)predicateWithSubpredicates:(id)arg1 ;
-(char)hasCreatedViews;
-(void)setHasCreatedViews:(char)arg1 ;
-(void)createViewsIfNecessary;
-(void)setLeftExpressionPopup:(NSPopUpButton *)arg1 ;
-(NSPopUpButton *)leftExpressionPopup;
-(id)initTemplateWithName:(id)arg1 andKeyPath:(id)arg2 andValueName:(id)arg3 andValue:(char)arg4 ;
-(void)setValueName:(NSString *)arg1 ;
-(NSString *)valueName;
-(void)setValuePopup:(NSPopUpButton *)arg1 ;
-(NSPopUpButton *)valuePopup;
@end

