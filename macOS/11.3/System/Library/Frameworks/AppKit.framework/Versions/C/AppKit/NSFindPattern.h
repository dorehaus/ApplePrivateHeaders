/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:00 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NSFindPattern : NSObject <NSCoding, NSCopying> {

	NSString* regularExpression;
	NSString* tokenString;
	NSString* displayString;
	NSString* replacementString;
	NSString* uniqueID;
	char allowsBackreferences;
	int groupID;
	int captureGroupID;
	int repeatedPatternID;

}

@property (copy) NSString * regularExpression; 
@property (copy) NSString * tokenString; 
@property (copy) NSString * displayString; 
@property (copy) NSString * replacementString; 
@property (readonly) NSString * uniqueID; 
@property (assign) char allowsBackreferences; 
@property (assign) int groupID; 
@property (assign) int captureGroupID; 
@property (assign) int repeatedPatternID; 
+(id)readableTypesForPasteboard:(id)arg1 ;
+(unsigned long long)readingOptionsForType:(id)arg1 pasteboard:(id)arg2 ;
+(id)placeholderFindPattern;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uniqueID;
-(NSString *)replacementString;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)regularExpression;
-(id)writableTypesForPasteboard:(id)arg1 ;
-(char)allowsBackreferences;
-(id)propertyListRepresentation;
-(int)repeatedPatternID;
-(void)_setUniqueID:(id)arg1 ;
-(int)groupID;
-(int)captureGroupID;
-(NSString *)displayString;
-(NSString *)tokenString;
-(void)setTokenString:(NSString *)arg1 ;
-(void)setRegularExpression:(NSString *)arg1 ;
-(void)setAllowsBackreferences:(char)arg1 ;
-(void)setGroupID:(int)arg1 ;
-(void)setCaptureGroupID:(int)arg1 ;
-(void)setReplacementString:(NSString *)arg1 ;
-(void)generateNewUniqueID;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(id)replaceExpression;
-(id)backreferenceExpression;
-(void)setRepeatedPatternID:(int)arg1 ;
@end

