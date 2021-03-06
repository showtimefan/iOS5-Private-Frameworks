/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString;

@interface PSLanguageSelector : NSObject
{
    NSString *_language;
    NSMutableArray *_supportedLanguages;
    NSArray *_supportedKeyboards;
}

+ (id)sharedInstance;
- (void)dealloc;
- (void)_setLanguage:(id)arg1;
- (BOOL)_adjustLanguageIndices;
- (void)_loadSupportedLanguages;
- (id)currentLanguage;
- (void)setLanguage:(id)arg1;
- (id)supportedLanguages;

@end

