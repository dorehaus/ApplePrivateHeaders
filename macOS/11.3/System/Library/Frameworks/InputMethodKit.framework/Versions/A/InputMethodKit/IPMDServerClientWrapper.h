/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputMethodKit/InputMethodKit-Structs.h>
#import <libobjc.A.dylib/IMKTextInput.h>
#import <libobjc.A.dylib/IMKUnicodeTextInput.h>
#import <libobjc.A.dylib/IMTSMSupport.h>
#import <libobjc.A.dylib/TIPropertyProvider.h>

@protocol NSObjectIMKTextInputIMKUnicodeTextInputIMTSMSupport;
@class NSXPCConnection, NSString, NSMutableDictionary, NSAppearance;

@interface IPMDServerClientWrapper : NSObject <IMKTextInput, IMKUnicodeTextInput, IMTSMSupport, TIPropertyProvider> {

	id<NSObject><IMKTextInput><IMKUnicodeTextInput><IMTSMSupport> _clientDOProxy;
	NSXPCConnection* _xpcConnection;
	char _usesXPC;
	char _inserting;
	unsigned long long _markedCharacterCount;
	long long _documentIDCache;
	CGRect _touchBarAvailableFrameCache;
	NSString* _markedTextCache;
	char _currentAttributesCacheValid;
	char _currentIndexZeroAttributeCacheValid;
	long long _keyboardType;
	NSMutableDictionary* _validEvents;
	double _replyTimeout;
	char _isForcedSilentCommitComposition;
	int _windowLevel_Cache;
	NSString* _bundleIdentifier_Cache;
	NSAppearance* _viewEffectiveAppearance_Cache;
	NSMutableDictionary* _attributes_Cache;

}

@property (assign,nonatomic) long long documentIDCache;                                 //@synthesize documentIDCache=_documentIDCache - In the implementation block
@property (assign,nonatomic) CGRect touchBarAvailableFrameCache;                        //@synthesize touchBarAvailableFrameCache=_touchBarAvailableFrameCache - In the implementation block
@property (assign,nonatomic) int windowLevel_Cache;                                     //@synthesize windowLevel_Cache=_windowLevel_Cache - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier_Cache;                           //@synthesize bundleIdentifier_Cache=_bundleIdentifier_Cache - In the implementation block
@property (nonatomic,retain) NSAppearance * viewEffectiveAppearance_Cache;              //@synthesize viewEffectiveAppearance_Cache=_viewEffectiveAppearance_Cache - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * attributes_Cache;                  //@synthesize attributes_Cache=_attributes_Cache - In the implementation block
@property (assign,nonatomic) char currentAttributesCacheValid;                          //@synthesize currentAttributesCacheValid=_currentAttributesCacheValid - In the implementation block
@property (assign,nonatomic) char currentIndexZeroAttributeCacheValid;                  //@synthesize currentIndexZeroAttributeCacheValid=_currentIndexZeroAttributeCacheValid - In the implementation block
+(void)terminateForClientDOProxy:(id)arg1 ;
+(id)_validateClientWrapper:(id)arg1 ;
+(id)clientWrapperWithClientXPCConn:(id)arg1 ;
+(id)clientWrapperWithClientDOProxy:(id)arg1 ;
+(void)terminateForClientXPCConn:(id)arg1 ;
+(void)invalidateConnectionsAsNecessary:(id)arg1 ;
-(char)shouldSuppressCandidates;
-(long long)characterIndexForPoint:(CGPoint)arg1 tracking:(long long)arg2 inMarkedRange:(char*)arg3 ;
-(id)uniqueClientIdentifierString;
-(void)replyWaitCount_incrementWithLocking;
-(void)replyWaitCount_lockDecrement;
-(void)replyWaitCount_unlock;
-(void)replyWaitCount_decrementWithLocking;
-(id)_clientDOProxy;
-(id)initWithClientXPCConn:(id)arg1 ;
-(id)initWithClientDOProxy:(id)arg1 ;
-(int)replyWaitCount_testWithLocking;
-(void)replyWaitCount_lockIncrement;
-(void)setCurrentIndexZeroAttributeCacheValid:(char)arg1 ;
-(void)setCurrentAttributesCacheValid:(char)arg1 ;
-(void)setMarkedText_Cache:(id)arg1 ;
-(char)isForcedSilentCommitComposition;
-(char)usesXPC;
-(char)_clientTryRespondsToSelector:(SEL)arg1 ;
-(char)currentAttributesCacheValid;
-(char)currentIndexZeroAttributeCacheValid;
-(id)attributesForCharacterIndex_Cache:(unsigned long long)arg1 ;
-(void)invalidateAttributesCacheForAllIndex:(char)arg1 ;
-(void)setAttributes_Cache:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(unsigned long long)markedCharacterCount;
-(int)windowLevel_Cache;
-(void)setWindowLevel_Cache:(int)arg1 ;
-(long long)documentIDCache;
-(id)getApplicationPropertyValue:(unsigned long long)arg1 ;
-(void)setDocumentIDCache:(long long)arg1 ;
-(CGRect)touchBarAvailableFrameCache;
-(void)setTouchBarAvailableFrameCache:(CGRect)arg1 ;
-(NSString *)bundleIdentifier_Cache;
-(void)setBundleIdentifier_Cache:(NSString *)arg1 ;
-(NSAppearance *)viewEffectiveAppearance_Cache;
-(void)setViewEffectiveAppearance_Cache:(NSAppearance *)arg1 ;
-(NSMutableDictionary *)attributes_Cache;
-(CGRect)touchBarAvailableFrame;
-(double)touchBarTotalWidth;
-(void)clientException;
-(char)inserting;
-(void)setForcedSilentCommitComposition:(char)arg1 ;
-(void)setTouchBarAvailableFrame:(CGRect)arg1 ;
-(void)addValidEvent:(id)arg1 withClientUniqueNum:(unsigned long long)arg2 ;
-(void)invalidateAllEvents;
-(id)viewEffectiveAppearance;
-(char)isContinuousSpellCheckingEnabled_WithAvailability:(char*)arg1 ;
-(char)isGrammarCheckingEnabled_WithAvailability:(char*)arg1 ;
-(char)isAutomaticTextCompletionEnabled_WithAvailability:(char*)arg1 ;
-(char)isAutomaticTextReplacementEnabled_WithAvailability:(char*)arg1 ;
-(char)isAutomaticSpellingCorrectionEnabled_WithAvailability:(char*)arg1 ;
-(char)isAutomaticDashSubstitutionEnabled_WithAvailability:(char*)arg1 ;
-(char)isAutomaticQuoteSubstitutionEnabled_WithAvailability:(char*)arg1 ;
-(char)isSmartInsertDeleteEnabled_WithAvailability:(char*)arg1 ;
-(char)isAutomaticCapitalizationEnabled_WithAvailability:(char*)arg1 ;
-(char)isAutomaticPeriodSubstitutionEnabled_WithAvailability:(char*)arg1 ;
-(void)invalidateClientCacheOnActivateServer;
-(void)dealloc;
-(long long)length;
-(id)attributedSubstringFromRange:(NSRange)arg1 ;
-(id)_xpcConnection;
-(id)bundleIdentifier;
-(int)processIdentifier;
-(void)commit;
-(double)replyTimeout;
-(void)setReplyTimeout:(double)arg1 ;
-(unsigned long long)keyboardType;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(NSRange)selectedRange;
-(long long)spellCheckerDocumentTag;
-(NSRange)markedRange;
-(id)validAttributesForMarkedText;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 actualRange:(NSRange*)arg2 ;
-(int)windowLevel;
-(void)insertText:(id)arg1 ;
-(CGRect)firstRectForCharacterRange:(NSRange)arg1 ;
-(void)resetState;
-(unsigned long long)incrementalSearchClientGeometry;
-(char)wouldHandleEvent:(id)arg1 ;
-(char)_TIPropertyValueIsValid:(unsigned long long)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(void)selectInputMode:(id)arg1 ;
-(id)attributesForCharacterIndex:(unsigned long long)arg1 lineHeightRectangle:(CGRect*)arg2 ;
-(id)stringFromRange:(NSRange)arg1 actualRange:(NSRange*)arg2 ;
-(char)isIncrementalSearchInputContext;
-(void)setMarkedText:(id)arg1 selectionRange:(NSRange)arg2 replacementRange:(NSRange)arg3 ;
-(void)overrideKeyboardWithKeyboardNamed:(id)arg1 ;
-(char)supportsUnicode;
-(char)supportsProperty:(unsigned)arg1 ;
-(char)isBottomLineInputContext;
-(void)inputSessionDoneSleep;
-(void)hidePalettesAtInsertionPoint;
-(unsigned)deadKeyState;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 validFlags:(unsigned long long)arg3 ;
-(void)setMarkedText:(id)arg1 selectionRange:(NSRange)arg2 replacementRange:(NSRange)arg3 validFlags:(unsigned long long)arg4 ;
-(id)attributesForCharacterIndex:(unsigned long long)arg1 ;
-(id)currentInputSourceBundleID;
-(void)terminatePalette:(id)arg1 ;
-(char)isPaletteTerminated:(id)arg1 ;
-(void)commitPendingInlineSession;
-(id)markedRangeValue;
-(char)isTextPlaceholderAwareInputContext;
-(char)isDictationHiliteCapableInputContext;
-(char)supportsChromaticMarkedText;
-(char)supportsTextAttachmentInsertion;
-(id)windowEffectiveAppearance;
-(void)presentFunctionRowItemTextInputView;
-(void)dismissFunctionRowItemTextInputView;
-(void)setApplicationProperty:(unsigned long long)arg1 withValue:(id)arg2 waitUntilDone:(char)arg3 ;
-(char)isSecureMode;
@end
