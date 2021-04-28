/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, NSString;

@interface CalDAVCalendarServerChangedPropertyItem : CoreDAVItem {

	NSMutableSet* _changedParameters;
	NSString* _nameAttribute;
	NSString* _typeAttribute;

}

@property (nonatomic,retain) NSString * nameAttribute;                      //@synthesize nameAttribute=_nameAttribute - In the implementation block
@property (nonatomic,retain) NSString * typeAttribute;                      //@synthesize typeAttribute=_typeAttribute - In the implementation block
@property (nonatomic,retain) NSMutableSet * changedParameters;              //@synthesize changedParameters=_changedParameters - In the implementation block
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)setNameAttribute:(NSString *)arg1 ;
-(NSString *)nameAttribute;
-(void)parserFoundAttributes:(id)arg1 ;
-(id)copyParseRules;
-(void)setTypeAttribute:(NSString *)arg1 ;
-(NSMutableSet *)changedParameters;
-(void)addChangedParameter:(id)arg1 ;
-(void)setChangedParameters:(NSMutableSet *)arg1 ;
-(NSString *)typeAttribute;
@end

