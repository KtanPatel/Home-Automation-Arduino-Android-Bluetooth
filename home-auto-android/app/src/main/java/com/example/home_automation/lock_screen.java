package com.example.home_automation;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Toast;

public class lock_screen extends AppCompatActivity {

    EditText txtpin;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_lock_screen);
        txtpin = (EditText)findViewById(R.id.textpin);

    }

    public void onClickEnter(View v){
        String myPin = "123456";
        String pin =  txtpin.getText().toString();

        if(myPin.equalsIgnoreCase(pin)){
            Toast.makeText(getApplicationContext(), "Login Successful.", Toast.LENGTH_LONG).show();
            Intent intent = new Intent(this, MainActivity.class);
            startActivity(intent);
            finish();
        }else{
            Toast.makeText(getApplicationContext(), "Invalid PIN", Toast.LENGTH_LONG).show();
        }

    }


}
