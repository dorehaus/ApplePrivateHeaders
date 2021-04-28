/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/StorageKit.framework/Versions/A/StorageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SKFilesystem : NSObject {

	char _isEncrypted;
	char _defaultEffaceable;
	char _isCaseSensitive;
	char _isJournaled;
	char _shouldShow;
	int _sortPriority;
	NSString* _localizedName;
	NSString* _type;
	NSString* _dmPersonality;
	unsigned long long _minimumSize;
	NSString* _localizedKey;

}

@property (retain) NSString * localizedName;                    //@synthesize localizedName=_localizedName - In the implementation block
@property (retain) NSString * localizedKey;                     //@synthesize localizedKey=_localizedKey - In the implementation block
@property (retain) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (retain) NSString * dmPersonality;                    //@synthesize dmPersonality=_dmPersonality - In the implementation block
@property (assign) char isEncrypted;                            //@synthesize isEncrypted=_isEncrypted - In the implementation block
@property (assign) char defaultEffaceable;                      //@synthesize defaultEffaceable=_defaultEffaceable - In the implementation block
@property (assign) char isCaseSensitive;                        //@synthesize isCaseSensitive=_isCaseSensitive - In the implementation block
@property (assign) char isJournaled;                            //@synthesize isJournaled=_isJournaled - In the implementation block
@property (assign) char shouldShow;                             //@synthesize shouldShow=_shouldShow - In the implementation block
@property (assign) unsigned long long minimumSize;              //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign) int sortPriority;                            //@synthesize sortPriority=_sortPriority - In the implementation block
+(char)_shouldShowFilesystem:(id)arg1 ;
+(id)_skfilesystemTypeWithPersonality:(id)arg1 ;
+(id)filesystemsWithDMFilesystem:(id)arg1 ;
-(void)setDmPersonality:(NSString *)arg1 ;
-(id)initWithSKFilesystem:(id)arg1 localizedName:(id)arg2 localizedKey:(id)arg3 caseSensitive:(char)arg4 encrypted:(char)arg5 shouldShow:(char)arg6 dmPersonality:(id)arg7 minimumSize:(unsigned long long)arg8 sortPriority:(int)arg9 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(NSString *)localizedName;
-(unsigned long long)minimumSize;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)localizedKey;
-(void)setLocalizedKey:(NSString *)arg1 ;
-(void)setMinimumSize:(unsigned long long)arg1 ;
-(char)isCaseSensitive;
-(void)setSortPriority:(int)arg1 ;
-(int)sortPriority;
-(void)setLocalizedName:(NSString *)arg1 ;
-(char)isJournaled;
-(char)isEncrypted;
-(void)setIsEncrypted:(char)arg1 ;
-(char)shouldShow;
-(char)defaultEffaceable;
-(void)setShouldShow:(char)arg1 ;
-(void)setIsJournaled:(char)arg1 ;
-(NSString *)dmPersonality;
-(void)setIsCaseSensitive:(char)arg1 ;
-(void)setDefaultEffaceable:(char)arg1 ;
-(id)dicationaryRepresentation;
@end
