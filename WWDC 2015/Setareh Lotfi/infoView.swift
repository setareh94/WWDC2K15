//
//  infoView.swift
//  Setareh Lotfi
//
//  Created by Setareh Lotfi on 4/26/15.
//  Copyright (c) 2015 Setareh Lotfi. All rights reserved.
//

import Foundation
import UIKit

class infoView: ViewController{

    @IBOutlet var Back: UIButton!
    
    @IBAction func linkedIn(sender: AnyObject) {
          UIApplication.sharedApplication().openURL(NSURL(string: "https://www.linkedin.com/in/setarehlotfi")!)
    }
    @IBAction func github(sender: AnyObject) {
        UIApplication.sharedApplication().openURL(NSURL(string: "https://github.com/setareh94")!)
    }
    
    @IBAction func twitter(sender: AnyObject) {
        UIApplication.sharedApplication().openURL(NSURL(string: "https://twitter.com/StarrWAA")!)
    }
}

