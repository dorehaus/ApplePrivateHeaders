/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ScreenReader.framework/Versions/A/Frameworks/BrailleTranslation.framework/Versions/A/BrailleTranslation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BrailleTranslation/BrailleTranslation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface BRLTScriptString : NSObject <NSCopying> {

	NSString* _string;
	NSMutableArray* _tokenRanges;
	NSRange _selection;
	NSRange _focus;

}

@property (nonatomic,retain) NSMutableArray * tokenRanges;              //@synthesize tokenRanges=_tokenRanges - In the implementation block
@property (nonatomic,readonly) NSString * string;                       //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) NSRange selection;                       //@synthesize selection=_selection - In the implementation block
@property (nonatomic,readonly) NSRange focus;                           //@synthesize focus=_focus - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(NSString *)string;
-(NSRange)selection;
-(NSMutableArray *)tokenRanges;
-(NSRange)focus;
-(id)initWithString:(id)arg1 selection:(NSRange)arg2 ;
-(id)initWithString:(id)arg1 selection:(NSRange)arg2 focus:(NSRange)arg3 token:(unsigned long long)arg4 ;
-(void)_addSelectionRange:(NSRange)arg1 ;
-(char)isEqualToScriptString:(id)arg1 ;
-(NSRange)_backwardEditingAtomForCursorLocation:(unsigned long long)arg1 isBreak:(char*)arg2 ;
-(NSRange)backwardEditingAtom;
-(NSRange)forwardEditingAtom;
-(NSRange)_backwardEditingAtomForSelection:(NSRange)arg1 isBreak:(char*)arg2 ;
-(NSRange)forwardEditingAtomForCursorLocation:(unsigned long long)arg1 ;
-(void)addString:(id)arg1 selection:(NSRange)arg2 focus:(NSRange)arg3 token:(unsigned long long)arg4 ;
-(NSRange)deleteMergeAtom;
-(void)setTokenRanges:(NSMutableArray *)arg1 ;
@end

